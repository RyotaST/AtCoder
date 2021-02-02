N = gets.to_i
ary = []
N.times{ary.push(gets.split.map(&:to_i))}

ary.combination(3) do |n|
  if n[0][0] == n[1][0] || n[1][0] == n[2][0]
    if n[0][0] == n[1][0] && n[1][0] == n[2][0]
      puts 'Yes'
      exit
    end
  elsif n[0][1] == n[1][1] || n[1][1] == n[2][1]
    if n[0][1] == n[1][1] && n[1][1] == n[2][1]
      puts 'Yes'
      exit
    end
  else
    if ((n[1][1] - n[0][1]).rationalize / (n[1][0] - n[0][0]).rationalize) == ((n[1][1] - n[2][1]).rationalize / (n[1][0] - n[2][0]).rationalize)
      puts 'Yes'
      exit
    end
  end
end

puts 'No'