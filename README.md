# GreenLab v0.6

## What is this repository?

This repository contains several labs (exercises).

- The first lab acts as an introduction where the trainee writes some code about palindromes.

- The second lab aims at implementing the computation of the carbon emissions of an application.

- The third lab aims at planning a schedule of jobs that minimizes carbon emissions across multiple datacenters.


## Usage

### 1. Requirements

A Linux-like system with Bash.
- Windows users: enable WSL (https://aka.ms/wslinstall) and install
  some Linux distribution.

Install git; clone https://github.com/AmadeusITGroup/GreenLab/tree/main

If you are behind a TLS inspector like Netskope, the cloning may fail.
In that case, add the missing root certificate to the system.  For
example in Debian/Ubuntu:

    Note the installed filename must end with .crt:
    $ sudo install -m 644 CERTIFICATE -T /usr/local/share/ca-certificates/my-new-cert.crt
    $ sudo update-ca-certificates

Install Podman or Docker.  Bash should be able to run "podman" or "docker".
    
    $ podman machine init --cpus 2 --memory 2048
    $ podman machine start

If you use Podman on Linux, you may need to add Dockerhub to your registries:

    $ sudo nano /etc/containers/registries.conf
    add line: unqualified-search-registries = ['docker.io']

Pull the image "ravichou/greenlab":

    podman pull -q {IMAGE}
    -or-
    docker pull -q {IMAGE}

### 2. Running the labs

Options

-l *lab_number* : select lab number to run (mandatory), (e.g. 1.1 1.3 2 3.1 ...)

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
