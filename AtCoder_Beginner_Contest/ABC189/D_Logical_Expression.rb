N = gets.to_i
s = Array.new(N){gets.chomp}
result = 0
[true, false].repeated_permutation(N+1) do |n1|
  y = false
  0.upto(n1.size-1) do |n2|
    if n2 == 0
      y = n1[0]
    else
      if s[n2] == "AND"
        y = y && n1[n2]
      else
        y = y || n1[n2]
      end
    end
  end
  result += 1 if y == true
end

puts result