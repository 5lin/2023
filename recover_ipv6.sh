#!/bin/bash

# 恢复 IPv6
echo "恢复 IPv6..."
sed -i '/net.ipv6.conf.all.disable_ipv6 = 1/d' /etc/sysctl.conf
sed -i '/net.ipv6.conf.default.disable_ipv6 = 1/d' /etc/sysctl.conf

# 重新加载网络配置
echo "重新加载网络配置..."
sysctl -p

echo "IPv6 已成功恢复。"
