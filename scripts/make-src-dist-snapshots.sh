#!/bin/sh
# $Id: make-src-dist-snapshots.sh,v 1.2 2008-01-25 00:11:38 wagner Exp $

if [ -n "$ROOT" -a -d "$ROOT" ] ; then
  sysinfo="$ROOT/scripts/sysinfo.sh"
else
  root=`pwd`
  while [ -n "$root" -a ! -f "$root/scripts/sysinfo.sh" ] ; do
    root=`dirname $root`
  done
  sysinfo="$root/scripts/sysinfo.sh"
  if [ ! -f "$sysinfo" ] ; then
    echo "scripts/sysinfo.sh not found" 1>&2
    exit 1
  fi
  export root
fi
. "$sysinfo"

DS=${DS:-`date -u +'%Y-%m-%d-%H-%M-%S' | tr -d '\\n'`}

( . ${ROOT}/scripts/make-src-dist-all.sh )
( . ${ROOT}/scripts/make-src-dist-std.sh )
( . ${ROOT}/scripts/make-src-dist-sys.sh )
( . ${ROOT}/scripts/make-src-dist-gnu.sh )

