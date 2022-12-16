#!/usr/bin/env ruby
require 'tts'

if ARGV.size == 1
  ARGV[0].to_file "en"
  exit 0
elsif ARGV.size == 2
  ARGV[0].to_file ARGV[1]
  exit 0
else
  puts 'Usage: t2s.engine.rb "Your Text"'
  puts 'OR: t2s.engine.rb "Your Text" "Language Code"'
  exit 1
end
