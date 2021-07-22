N = gets.to_i
A = Array.new(N){gets.split.map(&:to_i)}
M = gets.to_i
relations = Array.new(N){Array.new}
M.times do
  a,b = gets.split.map(&:to_i)
  relations[a-1][b-1] = true
  relations[b-1][a-1] = true
end
result = -1
min = 10**9

(1..N).to_a.permutation(N){ |pattern|
  judge = false
  count = 0
  temp = 0
  temp += A[pattern[0]-1][count]
  left = pattern[0]
  pattern.each do |a|
    count += 1
    next if count == 1
    if relations[a-1][left-1] == true
      judge = true
      break
    else
      temp += A[a-1][count-1]
      left = a
    end
  end
  if judge == true
    next
  end
  min = temp if (temp > 0 && temp < min)
}

puts (min == 10**9) ? result : min