n = gets.chomp.chars.map(&:to_i)
(n.length).downto(1) do |n1|
  n.combination(n1) do |n2|
    if n2.join.to_i % 3 == 0
      p n.length-n1
      exit
    end
  end
end

p -1