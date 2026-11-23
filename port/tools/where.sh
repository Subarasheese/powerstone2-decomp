#!/bin/sh
# where.sh ADDR...: the host addresses a powerstone2 fault report prints, as functions and source lines
exec addr2line -f -i -p -e "$(dirname "$0")/../../build/native/powerstone2" "$@"
