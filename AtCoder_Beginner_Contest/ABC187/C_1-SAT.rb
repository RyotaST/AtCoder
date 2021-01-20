N = gets.chomp.to_i
strings = []
N.times {strings.push(gets.chomp)}
result = 'satisfiable'

N.times do |n1|
  if result == 'satisfiable'
    if strings[n1].include?('!')
      (n1+1).upto(strings.size) do |n2|
        if strings[n2] == (strings[n1][1..-1])
          result = strings[n2]
          break
        end
      end
    else
      (n1+1).upto(strings.size) do |n2|
        if strings[n2] == "!#{strings[n1]}"
          result = strings[n1]
          break
        end
      end
    end
  else
    break
  end
end

puts result