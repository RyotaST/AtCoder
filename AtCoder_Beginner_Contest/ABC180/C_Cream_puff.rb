require 'prime'
require 'set'

N = gets.to_i
result = []
answer = []

if N == 1
  p 1
  exit
else
  a = Prime.prime_division(N)
  a.map{|n| result << (0..n[1]).map{|n2| n[0]**n2}}
  tmp = result.delete_at(0)
  result = tmp.product(*result)

  result.map do |n1|
    answer.push(n1.inject{|result,n2| result*=n2})
  end
end

answer.sort.each{|n| p n}
