#!/bin/bash

builds=$(find -name build)


for build in $builds
do
    echo Clear $build ....
    rm -rf $build
done