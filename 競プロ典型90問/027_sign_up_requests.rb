require 'set'
s = Set.new
strings = Array.new(gets.to_i){gets.chomp}
strings.each_with_index do |value, index|
  puts index+1 if !(s.include?(value))
  s << value
end