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
        stage('test') {
          steps {
            sh 'echo "unit-test"'
          }
        }

        stage('') {
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