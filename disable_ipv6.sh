#!/bin/bash

# 禁用 IPv6
echo "禁用 IPv6..."
echo "net.ipv6.conf.all.disable_ipv6 = 1" >> /etc/sysctl.conf
echo "net.ipv6.conf.default.disable_ipv6 = 1" >> /etc/sysctl.conf

# 重新加载网络配置
echo "重新加载网络配置..."
sysctl -p

echo "IPv6 已成功禁用。"
