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

#include "OAIGetBusinessAccountGiftsRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGetBusinessAccountGiftsRequest::OAIGetBusinessAccountGiftsRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGetBusinessAccountGiftsRequest::OAIGetBusinessAccountGiftsRequest() {
    this->initializeModel();
}

OAIGetBusinessAccountGiftsRequest::~OAIGetBusinessAccountGiftsRequest() {}

void OAIGetBusinessAccountGiftsRequest::initializeModel() {

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_exclude_unsaved_isSet = false;
    m_exclude_unsaved_isValid = false;

    m_exclude_saved_isSet = false;
    m_exclude_saved_isValid = false;

    m_exclude_unlimited_isSet = false;
    m_exclude_unlimited_isValid = false;

    m_exclude_limited_isSet = false;
    m_exclude_limited_isValid = false;

    m_exclude_unique_isSet = false;
    m_exclude_unique_isValid = false;

    m_sort_by_price_isSet = false;
    m_sort_by_price_isValid = false;

    m_offset_isSet = false;
    m_offset_isValid = false;

    m_limit_isSet = false;
    m_limit_isValid = false;
}

void OAIGetBusinessAccountGiftsRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGetBusinessAccountGiftsRequest::fromJsonObject(QJsonObject json) {

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_exclude_unsaved_isValid = ::tele_rest::fromJsonValue(m_exclude_unsaved, json[QString("exclude_unsaved")]);
    m_exclude_unsaved_isSet = !json[QString("exclude_unsaved")].isNull() && m_exclude_unsaved_isValid;

    m_exclude_saved_isValid = ::tele_rest::fromJsonValue(m_exclude_saved, json[QString("exclude_saved")]);
    m_exclude_saved_isSet = !json[QString("exclude_saved")].isNull() && m_exclude_saved_isValid;

    m_exclude_unlimited_isValid = ::tele_rest::fromJsonValue(m_exclude_unlimited, json[QString("exclude_unlimited")]);
    m_exclude_unlimited_isSet = !json[QString("exclude_unlimited")].isNull() && m_exclude_unlimited_isValid;

    m_exclude_limited_isValid = ::tele_rest::fromJsonValue(m_exclude_limited, json[QString("exclude_limited")]);
    m_exclude_limited_isSet = !json[QString("exclude_limited")].isNull() && m_exclude_limited_isValid;

    m_exclude_unique_isValid = ::tele_rest::fromJsonValue(m_exclude_unique, json[QString("exclude_unique")]);
    m_exclude_unique_isSet = !json[QString("exclude_unique")].isNull() && m_exclude_unique_isValid;

    m_sort_by_price_isValid = ::tele_rest::fromJsonValue(m_sort_by_price, json[QString("sort_by_price")]);
    m_sort_by_price_isSet = !json[QString("sort_by_price")].isNull() && m_sort_by_price_isValid;

    m_offset_isValid = ::tele_rest::fromJsonValue(m_offset, json[QString("offset")]);
    m_offset_isSet = !json[QString("offset")].isNull() && m_offset_isValid;

    m_limit_isValid = ::tele_rest::fromJsonValue(m_limit, json[QString("limit")]);
    m_limit_isSet = !json[QString("limit")].isNull() && m_limit_isValid;
}

QString OAIGetBusinessAccountGiftsRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGetBusinessAccountGiftsRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_exclude_unsaved_isSet) {
        obj.insert(QString("exclude_unsaved"), ::tele_rest::toJsonValue(m_exclude_unsaved));
    }
    if (m_exclude_saved_isSet) {
        obj.insert(QString("exclude_saved"), ::tele_rest::toJsonValue(m_exclude_saved));
    }
    if (m_exclude_unlimited_isSet) {
        obj.insert(QString("exclude_unlimited"), ::tele_rest::toJsonValue(m_exclude_unlimited));
    }
    if (m_exclude_limited_isSet) {
        obj.insert(QString("exclude_limited"), ::tele_rest::toJsonValue(m_exclude_limited));
    }
    if (m_exclude_unique_isSet) {
        obj.insert(QString("exclude_unique"), ::tele_rest::toJsonValue(m_exclude_unique));
    }
    if (m_sort_by_price_isSet) {
        obj.insert(QString("sort_by_price"), ::tele_rest::toJsonValue(m_sort_by_price));
    }
    if (m_offset_isSet) {
        obj.insert(QString("offset"), ::tele_rest::toJsonValue(m_offset));
    }
    if (m_limit_isSet) {
        obj.insert(QString("limit"), ::tele_rest::toJsonValue(m_limit));
    }
    return obj;
}

QString OAIGetBusinessAccountGiftsRequest::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAIGetBusinessAccountGiftsRequest::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

bool OAIGetBusinessAccountGiftsRequest::isExcludeUnsaved() const {
    return m_exclude_unsaved;
}
void OAIGetBusinessAccountGiftsRequest::setExcludeUnsaved(const bool &exclude_unsaved) {
    m_exclude_unsaved = exclude_unsaved;
    m_exclude_unsaved_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_unsaved_Set() const{
    return m_exclude_unsaved_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_unsaved_Valid() const{
    return m_exclude_unsaved_isValid;
}

bool OAIGetBusinessAccountGiftsRequest::isExcludeSaved() const {
    return m_exclude_saved;
}
void OAIGetBusinessAccountGiftsRequest::setExcludeSaved(const bool &exclude_saved) {
    m_exclude_saved = exclude_saved;
    m_exclude_saved_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_saved_Set() const{
    return m_exclude_saved_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_saved_Valid() const{
    return m_exclude_saved_isValid;
}

bool OAIGetBusinessAccountGiftsRequest::isExcludeUnlimited() const {
    return m_exclude_unlimited;
}
void OAIGetBusinessAccountGiftsRequest::setExcludeUnlimited(const bool &exclude_unlimited) {
    m_exclude_unlimited = exclude_unlimited;
    m_exclude_unlimited_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_unlimited_Set() const{
    return m_exclude_unlimited_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_unlimited_Valid() const{
    return m_exclude_unlimited_isValid;
}

bool OAIGetBusinessAccountGiftsRequest::isExcludeLimited() const {
    return m_exclude_limited;
}
void OAIGetBusinessAccountGiftsRequest::setExcludeLimited(const bool &exclude_limited) {
    m_exclude_limited = exclude_limited;
    m_exclude_limited_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_limited_Set() const{
    return m_exclude_limited_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_limited_Valid() const{
    return m_exclude_limited_isValid;
}

bool OAIGetBusinessAccountGiftsRequest::isExcludeUnique() const {
    return m_exclude_unique;
}
void OAIGetBusinessAccountGiftsRequest::setExcludeUnique(const bool &exclude_unique) {
    m_exclude_unique = exclude_unique;
    m_exclude_unique_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_unique_Set() const{
    return m_exclude_unique_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_exclude_unique_Valid() const{
    return m_exclude_unique_isValid;
}

bool OAIGetBusinessAccountGiftsRequest::isSortByPrice() const {
    return m_sort_by_price;
}
void OAIGetBusinessAccountGiftsRequest::setSortByPrice(const bool &sort_by_price) {
    m_sort_by_price = sort_by_price;
    m_sort_by_price_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_sort_by_price_Set() const{
    return m_sort_by_price_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_sort_by_price_Valid() const{
    return m_sort_by_price_isValid;
}

QString OAIGetBusinessAccountGiftsRequest::getOffset() const {
    return m_offset;
}
void OAIGetBusinessAccountGiftsRequest::setOffset(const QString &offset) {
    m_offset = offset;
    m_offset_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_offset_Set() const{
    return m_offset_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_offset_Valid() const{
    return m_offset_isValid;
}

qint32 OAIGetBusinessAccountGiftsRequest::getLimit() const {
    return m_limit;
}
void OAIGetBusinessAccountGiftsRequest::setLimit(const qint32 &limit) {
    m_limit = limit;
    m_limit_isSet = true;
}

bool OAIGetBusinessAccountGiftsRequest::is_limit_Set() const{
    return m_limit_isSet;
}

bool OAIGetBusinessAccountGiftsRequest::is_limit_Valid() const{
    return m_limit_isValid;
}

bool OAIGetBusinessAccountGiftsRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exclude_unsaved_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exclude_saved_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exclude_unlimited_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exclude_limited_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_exclude_unique_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sort_by_price_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_offset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_limit_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGetBusinessAccountGiftsRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_business_connection_id_isValid && true;
}

} // namespace tele_rest
