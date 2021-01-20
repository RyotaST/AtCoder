N = gets.chomp.to_i
strings = []
N.times {strings.push(gets.chomp)}
result = 'satisfiable'

N.times do |n1|
  if result == 'satisfiable'
    if strings[n1][0] == '!'
      if strings.include?(strings[n1][1..-1])
        result = strings[n1][1..-1]
        break
      end
    end
  else
    break
  end
end

puts result