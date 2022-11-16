pipeline {
  agent any
  stages {
    stage('build') {
      steps {
        sh 'echo "build"'
      }
    }

    stage('test') {
      parallel {
        stage('test1') {
          steps {
            sh 'echo "unit-test"'
          }
        }

        stage('test2') {
          steps {
            sh 'echo "lint-test"'
          }
        }

      }
    }

    stage('deploy') {
      steps {
        sh 'echo "deploy"'
      }
    }

  }
}