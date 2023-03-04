FROM php:8.1-fpm

RUN apt-get update && apt-get install -y \
    git\
    curl\
    vim

RUN docker-php-ext-install pdo pdo_mysql mysqli

WORKDIR /var/www
