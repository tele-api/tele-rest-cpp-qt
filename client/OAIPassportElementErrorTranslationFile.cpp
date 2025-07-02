/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIPassportElementErrorTranslationFile.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPassportElementErrorTranslationFile::OAIPassportElementErrorTranslationFile(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPassportElementErrorTranslationFile::OAIPassportElementErrorTranslationFile() {
    this->initializeModel();
}

OAIPassportElementErrorTranslationFile::~OAIPassportElementErrorTranslationFile() {}

void OAIPassportElementErrorTranslationFile::initializeModel() {

    m_source_isSet = false;
    m_source_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;

    m_file_hash_isSet = false;
    m_file_hash_isValid = false;

    m_message_isSet = false;
    m_message_isValid = false;
}

void OAIPassportElementErrorTranslationFile::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPassportElementErrorTranslationFile::fromJsonObject(QJsonObject json) {

    m_source_isValid = ::tele_rest::fromJsonValue(m_source, json[QString("source")]);
    m_source_isSet = !json[QString("source")].isNull() && m_source_isValid;

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_file_hash_isValid = ::tele_rest::fromJsonValue(m_file_hash, json[QString("file_hash")]);
    m_file_hash_isSet = !json[QString("file_hash")].isNull() && m_file_hash_isValid;

    m_message_isValid = ::tele_rest::fromJsonValue(m_message, json[QString("message")]);
    m_message_isSet = !json[QString("message")].isNull() && m_message_isValid;
}

QString OAIPassportElementErrorTranslationFile::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPassportElementErrorTranslationFile::asJsonObject() const {
    QJsonObject obj;
    if (m_source_isSet) {
        obj.insert(QString("source"), ::tele_rest::toJsonValue(m_source));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_file_hash_isSet) {
        obj.insert(QString("file_hash"), ::tele_rest::toJsonValue(m_file_hash));
    }
    if (m_message_isSet) {
        obj.insert(QString("message"), ::tele_rest::toJsonValue(m_message));
    }
    return obj;
}

QString OAIPassportElementErrorTranslationFile::getSource() const {
    return m_source;
}
void OAIPassportElementErrorTranslationFile::setSource(const QString &source) {
    m_source = source;
    m_source_isSet = true;
}

bool OAIPassportElementErrorTranslationFile::is_source_Set() const{
    return m_source_isSet;
}

bool OAIPassportElementErrorTranslationFile::is_source_Valid() const{
    return m_source_isValid;
}

QString OAIPassportElementErrorTranslationFile::getType() const {
    return m_type;
}
void OAIPassportElementErrorTranslationFile::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIPassportElementErrorTranslationFile::is_type_Set() const{
    return m_type_isSet;
}

bool OAIPassportElementErrorTranslationFile::is_type_Valid() const{
    return m_type_isValid;
}

QString OAIPassportElementErrorTranslationFile::getFileHash() const {
    return m_file_hash;
}
void OAIPassportElementErrorTranslationFile::setFileHash(const QString &file_hash) {
    m_file_hash = file_hash;
    m_file_hash_isSet = true;
}

bool OAIPassportElementErrorTranslationFile::is_file_hash_Set() const{
    return m_file_hash_isSet;
}

bool OAIPassportElementErrorTranslationFile::is_file_hash_Valid() const{
    return m_file_hash_isValid;
}

QString OAIPassportElementErrorTranslationFile::getMessage() const {
    return m_message;
}
void OAIPassportElementErrorTranslationFile::setMessage(const QString &message) {
    m_message = message;
    m_message_isSet = true;
}

bool OAIPassportElementErrorTranslationFile::is_message_Set() const{
    return m_message_isSet;
}

bool OAIPassportElementErrorTranslationFile::is_message_Valid() const{
    return m_message_isValid;
}

bool OAIPassportElementErrorTranslationFile::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_source_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_file_hash_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPassportElementErrorTranslationFile::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_source_isValid && m_type_isValid && m_file_hash_isValid && m_message_isValid && true;
}

} // namespace tele_rest
