add_executable(answer_test test_answer.cpp)

target_include_directories(answer
	PUBLIC
		..
		../3rdparty
)
target_link_libraries(answer_test
	answer)

add_test(answer answer_test)