N,M,X = gets.split.map(&:to_i)
books = Array.new(N){gets.split.map(&:to_i)}
result = Array.new(M+1){0}
min = 12*10**5+1

1.upto(N) do |n1|
  books.combination(n1).to_a.each do |n2|
    n2.each do |n3|
      time = 0
      n3.each do |n4|
        result[time] += n4
        time += 1
      end
      min_now = result[1..-1].min
      if min_now >= X
      	min = result[0] if result[0] < min
      end
    end
    result.fill(0)
  end
end

puts (min == 12*10**5+1) ? -1 : min