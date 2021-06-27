N = gets.to_i
students = Array.new(N){gets.split.map(&:to_i)}
Q = gets.to_i
que = Array.new(Q){gets.split.map(&:to_i)}
sum1 = [0]
sum2 = [0]
students.each do |x|
  if x[0] == 1
    sum1.push(sum1[-1] + x[1])
    sum2.push(sum2[-1])
  else
    sum1.push(sum1[-1])
    sum2.push(sum2[-1] + x[1])
  end
end

que.each do |x|
  result = [sum1[x[1]]-sum1[x[0]], sum2[x[1]]-sum2[x[0]]]
  (students[x[0]-1][0] == 1) ? (result[0] += students[x[0]-1][1]) : (result[1] += students[x[0]-1][1])
  puts result.join(" ")
end