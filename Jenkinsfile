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
        stage('unit-test') {
          steps {
            sh 'echo "unit-test"'
          }
        }

        stage('lint-test') {
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