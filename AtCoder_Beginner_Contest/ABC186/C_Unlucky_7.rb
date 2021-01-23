require 'set'

N = gets.to_i
s = Set.new
(1..N).each do |n|
  s << n.to_s if n.to_s.include?("7")
  s << n.to_s(8).to_i if n.to_s(8).include?("7")
end

puts (N - s.size)