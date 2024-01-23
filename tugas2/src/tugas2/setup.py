from setuptools import setup

package_name = 'tugas2'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gusti',
    maintainer_email='gustigratia706@gmail.com',
    description='Publisher Subscriber 2',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker1 = tugas2.publisher1:main',
            'talker2 = tugas2.publisher2:main',
            'listener = tugas2.subscriber:main',
        ],
    },
)
