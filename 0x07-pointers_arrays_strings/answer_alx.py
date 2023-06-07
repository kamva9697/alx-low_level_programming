#!/bin/python3

import subprocess


class UserExerciseData:
    filesToPush = [""]
    task = 0
    exercise = ""

    def get_fields(self):
        self.exercise = input("Enter exercise Number e.g 0x01: ")
        self.task = int(input("Enter task number: "))
        self.filesToPush = input(
            "Enter files to be pushed to GitHub (space separated): ").split(' ')

    def validate_input(self):
        print("Are these correct? Validate before Submiting\n")
        print(f"-> Exercise number:\t{self.exercise}")
        print(f"-> Task number:\t{self.task}")
        print(f"-> Files to push:\t{self.filesToPush}")
        validated = input("y/n: ")

        if (validated.startswith('y')):
            return

        print("Choose fields to update:")
        print("1. Exercise number")
        print("2. Task number")
        print("3. Files to push")

        data_to_validate = input(
            "space separated (e.g 1 3) or a for all: ").split(' ')

        if len(data_to_validate) == 1 and 'a' in data_to_validate:
            self.get_fields()
        else:
            for op in data_to_validate:
                if op == '1':
                    self.exercise = input(
                        "Enter exercise Number e.g 0x01: ")
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
        subprocess.check_output(["git", "commit", "-m", commit_message])

        print("\n\nSit tight...Doing the git magic...\n")
        # push files
        subprocess.check_output(["git", "push"])
        print(f"\nWala! Exercise {commit_message} pushed to GitHub :)")


def main():
    try:
        print("******** Submiting ALX Task **********")

        submission = UserExerciseData()
        submission.get_fields()
        submission.validate_input()
        submission.commit_and_push()
    except KeyboardInterrupt:
        print("Quiting the Submission..")
        exit(0)


if __name__ == "__main__":
    main()
