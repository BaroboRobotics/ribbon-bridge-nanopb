#!/bin/bash

scriptDir=$(dirname "$0")

protoc --plugin=protoc-gen-nanopb=$scriptDir/../generator/protoc-gen-nanopb \
    -I$scriptDir/../generator/proto "$@"
