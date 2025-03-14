# GreenLab v0.6

## What is this repository?

This repository contains several labs (exercises).

- The first lab acts as an introduction where the trainee writes some code about palindromes.

- The second lab aims at implementing the computation of the carbon emissions of an application.

- The third lab aims at planning a schedule of jobs that minimizes carbon emissions across multiple datacenters.


## Usage

### 1. Requirements

The following dependencies need to be installed before running :
* Docker or Podman

### 2. Running the labs

Options

-l *lab_number* : select lab number to run (mandatory)

-s : run solution

-c : execute the C++ version of Lab 1

From the root of the repository, run:

```shell
./run.sh -l *lab_number*
```

or manually

```shell
docker run --rm -it -v ./Labs:/app/Labs ravichou/greenlab:*version_number* python3 runner.py -l *lab_number*
```
Example:
```shell
docker run --rm -it -v ./Labs:/app/Labs ravichou/greenlab:0.0.9 python3 runner.py -l 1.2
```