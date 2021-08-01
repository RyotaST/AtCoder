require 'prime'
N = gets.to_i
result = 0

Prime.prime_division(N).each do |n|
  result += ((-1r+Math.sqrt(n[1]*8+1))/2r).to_i
end

puts result