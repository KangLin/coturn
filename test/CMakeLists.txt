project(test)

set(SOURCE_FILES
    test.cpp
    )

set(HEADER_FILES
    )

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE turn_server)
