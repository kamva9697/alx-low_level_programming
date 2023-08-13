#!/bin/python3

import subprocess
import os


def get_current_exercise():
    cur_dir = os.path.abspath('.').split('/')[-1]
    return cur_dir[:cur_dir.find('-')]


def get_task_number(list_of_files: list[str]) -> int:
    for file in list_of_files:
        try:
            return int(file[0])
        except ValueError:
            continue
    return -1


class UserExerciseData:
    filesToPush = [""]
    task = 0
    exercise = ""

    def get_fields(self):
        self.filesToPush = input(
            "Enter files to be pushed to GitHub (space separated): ").split(' ')
        self.exercise = get_current_exercise()
        self.task = get_task_number(self.filesToPush)

        if self.task < 0:
            print("Could not compute task number")
            self.task = int(input("Please Enter task number: "))

    def validate_input(self):
        print("Are these correct? Validate before Submiting\n")
        print(f"-> Exercise number:\t{self.exercise}")
        print(f"-> Task number:\t{self.task}")
        print(f"-> Files to push:\t{self.filesToPush}")
        validated = input("y/n: ").lower()

        if validated.startswith('y'):
            return

        print("Choose fields to update:")
        print("1. Task name")
        print("2. Task number")
        print("3. Files to push")

        data_to_validate = input(
            "space separated (e.g 1 3) or a for all: ").split(' ')

        if len(data_to_validate) == 1 and 'a' in data_to_validate:
            self.get_fields()
        else:
            for op in data_to_validate:
                if op == '1':
                    self.exercise = input("Enter exercise number: ")
                elif op == '2':
                    self.task = int(input("Enter task number: "))
                elif op == '3':
                    self.filesToPush = input(
                        "Enter files to be pushed to GitHub (space separated): ").split(' ')

    def commit_and_push(self):
        # Git add files
        for file in self.filesToPush:
            subprocess.check_output(
                ["git", "add", file])

        print(f"Files to be pushed: {self.filesToPush}")

        # commit files
        commit_message = f"{self.exercise}: Task {self.task}"
        print(f"commit message: {commit_message}")
        try:
            subprocess.check_output(["git", "commit", "-m", commit_message])
        except subprocess.CalledProcessError:
            print(
                "Git: no changes added to commit (use 'git add' and/or 'git commit -a')")
            print("Files are already committed, babe just type git push.")

        print("\n\nSit tight...Doing the git magic...\n")
        # push files
        subprocess.check_output(["git", "push"])
        print(
            f"\nWala! Exercise {commit_message} pushed to GitHub :)")


def main():
    try:
        banner = "********** Submiting ALX Task *********"
        print(banner)
        submission = UserExerciseData()
        submission.get_fields()
        submission.validate_input()
        submission.commit_and_push()
    except KeyboardInterrupt:
        print("Quiting the Submission..")
        exit(0)


if __name__ == "__main__":
    main()
