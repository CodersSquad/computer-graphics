#!/bin/bash

sections=(graphics-libs)

rm -rf public

for section in "${sections[@]}"; do
    pushd $section ;
    make
    popd
    mkdir -p public/
    mv $section/public/ public/$section
done
