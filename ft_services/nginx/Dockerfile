FROM alpine
LABEL dev="rd01f"
RUN apk add nginx \
    && mkdir -p /var/www/html/
USER nginx
WORKDIR /etc/nginx
ENTRYPOINT ["/usr/sbin/nginx", "-g", "daemon off;"]