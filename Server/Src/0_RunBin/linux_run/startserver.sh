rm -rf ./*.log

nohup ./LogServer  &
echo "$!" > logsvr.pid

nohup ./AccountServer &
echo "$!" > account.pid

nohup ./LoginServer &
echo "$!" > login.pid

nohup ./DBServer &
echo "$!" > dbsvr.pid

nohup ./LogicServer &
echo "$!" > logic.pid

nohup ./GameServer id=1 port=9008 &
echo "$!" > game1.pid

nohup ./ProxyServer &
echo "$!" > proxy.pid

nohup ./CenterServer &
echo "$!" > center.pid

tail -f ./log/*
