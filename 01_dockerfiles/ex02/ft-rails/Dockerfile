FROM ruby:latest

RUN apt-get update -y && apt-get install -y build-essential libpq-dev nodejs sqlite3

MAINTAINER mboulara <mboulara@student.42.fr>

ONBUILD COPY app /opt/app
ONBUILD WORKDIR /opt/app
ONBUILD EXPOSE 3000
ONBUILD RUN bundle update rails
ONBUILD RUN gem install bundler:1.16.2
ONBUILD RUN bundle install
ONBUILD RUN bundle update --bundler
ONBUILD RUN rake db:migrate
ONBUILD RUN rake db:seed
