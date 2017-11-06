#!/bin/bash


now=$(date -u +"%Y-%m-%dT%H:%M:%SZ")
echo "***************************************************"
echo $now
echo "***************************************************"
#nginx status
sudo systemctl status nginx | tee ../log/Log_$now
#Redis Db Status
sudo systemctl status redis | tee -a ../log/Log_$now
#PM2 NodeJS Status
pm2 show 0 | tee -a ../log/Log_$now
