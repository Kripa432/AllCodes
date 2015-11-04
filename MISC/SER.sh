#!/bin/bash 
echo 1 > /proc/sys/net/ipv4/ip_forward
/sbin/iptables -t nat -A POSTROUTING -o enp10s9 -j MASQUERADE
/sbin/iptables -A FORWARD -i enp10s9 -o enp4s0 -m state --state RELATED,ESTABLISHED -j ACCEPT
/sbin/iptables -A FORWARD -i enp4s0 -o enp10s9 -j ACCEPT
iptables -A INPUT -p tcp -m state --state NEW -m tcp --dport 80 -j ACCEPT