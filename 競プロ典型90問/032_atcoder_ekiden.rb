N = gets.to_i
A = Array.new(N){gets.split.map(&:to_i)}
M = gets.to_i
relations = Array.new(M){gets.split.map(&:to_i)}
result = -1
min = 10**9

(1..N).to_a.permutation(N).to_a.each do |pattern|
  judge = false
  count = 0
  temp = 0
  temp += A[pattern[0]-1][count]
  pattern.each_cons(2) do |a,b|
    count += 1
    relations.each do |relation|
      if (relation.include?(a) && relation.include?(b))
        judge = true
        break
      end
    end
    if judge == true
      break
    else
      temp += A[b-1][count]
    end
  end
  if judge == true
    next
  end
  min = temp if (temp > 0 && temp < min)
end

puts (min == 10**9) ? result : min