#!/bin/sh

sh build_clean.sh
sh build_comm.sh
sh build_servant.sh

# scp build/*.so root@47.76.135.86:/data/app/so/

