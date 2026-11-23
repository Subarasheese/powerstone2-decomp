#!/bin/sh
# mkpatch.sh: port/src_fixes.patch from the build's fixed copy of src/ (build/native/src_fixed, flat: src/ is a tree
# whose file stems are unique). The port never edits src/: a fix to the decomp's C for the host is made in the copy,
# and this writes the difference as the patch native_build.py applies. Run in the repo.
set -e
cd "$(dirname "$0")/../.."
out=port/src_fixes.patch
: > "$out.new"
find src -name '*.c' | sort | while read -r p; do
    f="build/native/src_fixed/$(basename "$p")"
    [ -f "$f" ] || continue
    if ! cmp -s "$p" "$f"; then
        diff -u --label "a/$p" --label "b/$p" "$p" "$f" >> "$out.new" || true
    fi
done
mv "$out.new" "$out"
grep -c '^+++ ' "$out" || true
