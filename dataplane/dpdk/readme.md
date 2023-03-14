# dpdk
DPDK的版本，直接从github下载，check到指定tag
`git checkout v22.11`
# lib
DPDK的安装目录
```shell
cd dpdk
meson setup build --prefix="/root/dpdk/go-dpdk/dpdk/dpdk/lib"
cd build
ninja
ninja install
```

# LD_LIBRARY_PATH
设置动态库查找路径，（TODO 需要优化）
## 临时设置
.1
`export LD_LIBRARY_PATH="/root/dpdk/go-dpdk/dpdk/lib/lib64/"`
.2
`ldconfig`
## 永久设置
.1
```shell
# 把 export LD_LIBRARY_PATH="/root/dpdk/go-dpdk/dpdk/lib/lib64/" 加入到/etc/profile
```
.2
`source /etc/profile`
.3
`ldconfig`