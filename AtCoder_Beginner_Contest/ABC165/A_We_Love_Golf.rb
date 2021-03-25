K=gets.to_i
A,B = gets.split.map(&:to_i)
judge = false
A.upto(B) do |n|
  if n % K == 0
    judge = true
    break
  end
end

puts judge ? "OK" : "NG"