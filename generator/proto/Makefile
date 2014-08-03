all: nanopb_pb2.py plugin_pb2.py interface_pb2.py

%_pb2.py: %.proto
	protoc --python_out=. $<
