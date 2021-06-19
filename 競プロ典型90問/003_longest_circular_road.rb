N = gets.to_i
box = []
(N-1).times{box.push(gets.split.map(&:to_i))}
route = Array.new(N){Array.new}
box.each do |n|
  route[n[0]-1].push(n[1])
  route[n[1]-1].push(n[0])
end

count = 0
check = Array.new(N){-1}
queue = [[1]]
judge = false
tip = 0

until queue.empty?
  num = []
  x = queue.shift
  x.each do |a|
    check[a-1] = count
    route[a-1].each do |n1|
      if check[n1-1] != -1
        next
      else
        num.push(n1)
        judge = true
      end
    end
    tip = a if judge == false
  end
  queue.push(num) if !(num.empty?)
  count += 1 if judge == true
  judge = false
end

check = Array.new(N){-1}
queue = [[tip]]
count = 0

until queue.empty?
  num = []
  x = queue.shift
  x.each do |a|
    check[a-1] = count
    route[a-1].each do |n1|
      if check[n1-1] != -1
        next
      else
        num.push(n1)
        judge = true
      end
    end
    tip = route[a-1] if judge == false
  end
  queue.push(num) if !(num.empty?)
  count += 1 if judge == true
  judge = false
end

puts count+1