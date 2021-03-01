N,X = gets.split.map(&:to_i)
material = gets.split.map(&:to_I)
result = []

N.downto(1) do |n1|
  material.combination(n1).to_a.each do |n2|
    result << X / n1 if (X - n2.sum) % n1 == 0
  end
end

puts result.min