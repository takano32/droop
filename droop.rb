#!/usr/bin/env ruby
# frozen_string_literal: true

def generate_table(n)
  table = []
  index = 0
  1.upto(n) do |y|
    table << [index]
    index += y
  end
  table.each do |raw|
  end
  table
end

table = <<~TABLE
0  2  5  9  14 20 27 35 44 54
1  4  8  13 19 26 34 43 53 63
3  7  12 18 25 33 42 52 62 71
6  11 17 24 32 41 51 61 70 78
10 16 23 31 40 50 60 69 77 84
15 22 30 39 49 59 68 76 83 89
21 29 38 48 58 67 75 82 88 93
28 37 47 57 66 74 81 87 92 96
36 46 56 65 73 80 86 91 95 98
45 55 64 72 79 85 90 94 97 99
TABLE

if $PROGRAM_NAME == __FILE__
  table = generate_table(10)
  p table
end
