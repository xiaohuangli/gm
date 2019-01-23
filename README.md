## Linux 版本

```
cat /etc/redhat-release
CentOS Linux release 7.6.1810
```

## nginx 安装

```
安装nginx源
yum localinstall http://nginx.org/packages/centos/7/noarch/RPMS/nginx-release-centos-7-0.el7.ngx.noarch.rpm
yum install nginx
service start nginx
```
## mysql
```
yum install mariadb-server mariadb 
yum install mysql mysql-devel
 
systemctl start mariadb  #启动MariaDB
systemctl stop mariadb  #停止MariaDB
systemctl restart mariadb  #重启MariaDB
systemctl enable mariadb  #设置开机启动

修改密码
mysql -u root -p
user mysql;
update user set password=password("123456")where user='root';
flush privileges;
exit
```
## php7

