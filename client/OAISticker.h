/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

/*
 * OAISticker.h
 *
 * This object represents a sticker.
 */

#ifndef OAISticker_H
#define OAISticker_H

#include <QJsonObject>

#include "OAIFile.h"
#include "OAIMaskPosition.h"
#include "OAIPhotoSize.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIPhotoSize;
class OAIFile;
class OAIMaskPosition;

class OAISticker : public OAIObject {
public:
    OAISticker();
    OAISticker(QString json);
    ~OAISticker() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getFileId() const;
    void setFileId(const QString &file_id);
    bool is_file_id_Set() const;
    bool is_file_id_Valid() const;

    QString getFileUniqueId() const;
    void setFileUniqueId(const QString &file_unique_id);
    bool is_file_unique_id_Set() const;
    bool is_file_unique_id_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getWidth() const;
    void setWidth(const qint32 &width);
    bool is_width_Set() const;
    bool is_width_Valid() const;

    qint32 getHeight() const;
    void setHeight(const qint32 &height);
    bool is_height_Set() const;
    bool is_height_Valid() const;

    bool isIsAnimated() const;
    void setIsAnimated(const bool &is_animated);
    bool is_is_animated_Set() const;
    bool is_is_animated_Valid() const;

    bool isIsVideo() const;
    void setIsVideo(const bool &is_video);
    bool is_is_video_Set() const;
    bool is_is_video_Valid() const;

    OAIPhotoSize getThumbnail() const;
    void setThumbnail(const OAIPhotoSize &thumbnail);
    bool is_thumbnail_Set() const;
    bool is_thumbnail_Valid() const;

    QString getEmoji() const;
    void setEmoji(const QString &emoji);
    bool is_emoji_Set() const;
    bool is_emoji_Valid() const;

    QString getSetName() const;
    void setSetName(const QString &set_name);
    bool is_set_name_Set() const;
    bool is_set_name_Valid() const;

    OAIFile getPremiumAnimation() const;
    void setPremiumAnimation(const OAIFile &premium_animation);
    bool is_premium_animation_Set() const;
    bool is_premium_animation_Valid() const;

    OAIMaskPosition getMaskPosition() const;
    void setMaskPosition(const OAIMaskPosition &mask_position);
    bool is_mask_position_Set() const;
    bool is_mask_position_Valid() const;

    QString getCustomEmojiId() const;
    void setCustomEmojiId(const QString &custom_emoji_id);
    bool is_custom_emoji_id_Set() const;
    bool is_custom_emoji_id_Valid() const;

    bool isNeedsRepainting() const;
    void setNeedsRepainting(const bool &needs_repainting);
    bool is_needs_repainting_Set() const;
    bool is_needs_repainting_Valid() const;

    qint32 getFileSize() const;
    void setFileSize(const qint32 &file_size);
    bool is_file_size_Set() const;
    bool is_file_size_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_file_id;
    bool m_file_id_isSet;
    bool m_file_id_isValid;

    QString m_file_unique_id;
    bool m_file_unique_id_isSet;
    bool m_file_unique_id_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_width;
    bool m_width_isSet;
    bool m_width_isValid;

    qint32 m_height;
    bool m_height_isSet;
    bool m_height_isValid;

    bool m_is_animated;
    bool m_is_animated_isSet;
    bool m_is_animated_isValid;

    bool m_is_video;
    bool m_is_video_isSet;
    bool m_is_video_isValid;

    OAIPhotoSize m_thumbnail;
    bool m_thumbnail_isSet;
    bool m_thumbnail_isValid;

    QString m_emoji;
    bool m_emoji_isSet;
    bool m_emoji_isValid;

    QString m_set_name;
    bool m_set_name_isSet;
    bool m_set_name_isValid;

    OAIFile m_premium_animation;
    bool m_premium_animation_isSet;
    bool m_premium_animation_isValid;

    OAIMaskPosition m_mask_position;
    bool m_mask_position_isSet;
    bool m_mask_position_isValid;

    QString m_custom_emoji_id;
    bool m_custom_emoji_id_isSet;
    bool m_custom_emoji_id_isValid;

    bool m_needs_repainting;
    bool m_needs_repainting_isSet;
    bool m_needs_repainting_isValid;

    qint32 m_file_size;
    bool m_file_size_isSet;
    bool m_file_size_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAISticker)

#endif // OAISticker_H
