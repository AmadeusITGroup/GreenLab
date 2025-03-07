# GreenLab v0.6

## What is the repository?

The repository is divided in different labs, that are little exercises.  

The first lab is an introduction that consists in writting little pieces of code about palindroms.

The second lab is an implementation of calculation of carbon emission of an application.

The third lab is to plan a schedule of jobs to minimize carbon emissions within different datacenters.


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