#!/usr/bin/env python3
# author: timeofmei

import os
import sys
import time
import subprocess

CPP_COMPILER = "g++"
CPP_STANDARD = "c++20"
TIME_PRECISION = 4


def stop():
    sys.exit(1)


def main():
    if len(sys.argv) < 2:
        print("usage: ./run.py [filename] [args...]\nfull path is not needed")
        stop()
    filename = sys.argv[1]
    if not filename.endswith(".cpp"):
        filename = filename + ".cpp"
    filename_without_ext = filename.split(".")[0]

    if len(sys.argv) > 2:
        args = sys.argv[2:]
    else:
        args = []

    full_filename = ""
    for path, _, files in os.walk(os.getcwd()):
        if filename in files:
            full_filename = path + "/" + filename

    if not full_filename:
        print(f"file {filename} not found")
        stop()

    try:
        subprocess.run([CPP_COMPILER, "--version"], capture_output=True)
    except FileNotFoundError:
        print(f"compiler {CPP_COMPILER} not found")
        stop()

    try:
        subprocess.run([CPP_COMPILER, f"--std={CPP_STANDARD}", "-Iinclude", full_filename, "-o", filename_without_ext], check=True)
    except:
        stop()

    begin = time.time()

    try:
        subprocess.run([f"./{filename_without_ext}"] + args, check=True)
    except:
        stop()

    elapsed = time.time() - begin

    print(f"running time: {round(elapsed, TIME_PRECISION)}s")

    subprocess.run(["rm", f"./{filename_without_ext}"])


if __name__ == "__main__":
    main()
