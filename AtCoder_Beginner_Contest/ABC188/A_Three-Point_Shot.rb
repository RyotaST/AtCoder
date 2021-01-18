X, Y = gets.chomp.split.map(&:to_i)

((X - Y).abs < 3) ? (puts 'Yes') : (puts 'No')