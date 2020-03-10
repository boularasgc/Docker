FROM alpine:latest

MAINTAINER mboulara <mboulara@student.42.fr>

RUN apk add --update \
    vim \
    && rm -fr /var/cache/apk/*

ENTRYPOINT ["vim"]

CMD ["echo", "vim is installed "]
