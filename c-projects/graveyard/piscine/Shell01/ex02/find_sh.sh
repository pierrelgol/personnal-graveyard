#!/bin/bash

find . -type f -name "*.sh" | sed -e 's#./##g' -e 's#.sh$##g'
